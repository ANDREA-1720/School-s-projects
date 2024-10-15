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
  echo "\033[90mCompilazione...\033[0m"
  g++ main.cpp -o build/main -std=c++17 
  if [ $? -ne 0 ]; then
    echo "\033[90mErrore nella compilazione.\033[0m"
    exit 1
  fi
  echo "\033[90mCompilazione completata.\033[0m"
fi

# Fase di esecuzione
if [ "$noRun" = false ]; then
  echo "\033[90mEsecuzione...\033[0m"
  ./build/main
  if [ $? -ne 0 ]; then
    echo "\033[90mErrore durante l'esecuzione.\033[0m"
    exit 1
  fi
  echo "\033[90mEsecuzione completata.\033[0m"
fi
