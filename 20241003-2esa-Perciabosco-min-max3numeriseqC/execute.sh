#!/bin/zsh

# Controlla i parametri
noBuild=false
noRun=false
for arg in "$@"; do
  case $arg in
    --noBuild)
      noBuild=true
      shift
      ;;
    --noRun)
      noRun=true
      shift
      ;;
  esac
done

# Fase di build
if [ "$noBuild" = false ]; then
  echo "Compilazione..."
  g++ main.cpp -o build/main
  if [ $? -ne 0 ]; then
    echo "Errore nella compilazione."
    exit 1
  fi
  echo "Compilazione completata."
fi

# Fase di esecuzione
if [ "$noRun" = false ]; then
  echo "Esecuzione..."
  ./build/main
  if [ $? -ne 0 ]; then
    echo "Errore durante l'esecuzione."
    exit 1
  fi
  echo "Esecuzione completata."
fi
