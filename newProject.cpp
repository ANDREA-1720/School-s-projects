#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
    string projectName;
    const string gray = "\\033[90m";
    const string reset = "\\033[0m";

    // Richiedi l'input per il nome del progetto
    cout << "Inserisci il nome del progetto: ";
    getline(cin, projectName);

    // Crea la cartella con il nome del progetto
    fs::create_directory(projectName);

    // Percorso del file main.cpp
    string mainFilePath = projectName + "/main.cpp";

    // Crea e scrivi nel file main.cpp
    ofstream mainFile(mainFilePath);
    if (mainFile.is_open())
    {
        mainFile << "/*\n";
        mainFile << "    Autore: Andrea Perciabosco\n";
        mainFile << "    Classe: 2ESA\n";
        mainFile << "    Descrizione: \"" << projectName << "\"\n";
        mainFile << "*/\n\n";
        mainFile << "#include <iostream>\n";
        mainFile << "#include <math.h>\n\n";
        mainFile << "using namespace std;\n\n";
        mainFile << "int main()\n{\n";
        mainFile << "    // Inizializzazione delle variabili\n";
        mainFile << "    // acquisizione input\n";
        mainFile << "    // elaborazione\n";
        mainFile << "    // comunicazione dei risultati output\n";
        mainFile << "    return 0;\n";
        mainFile << "}\n";

        mainFile.close();
        cout << "File main.cpp creato con successo." << endl;
    }
    else
    {
        cerr << "Errore nella creazione del file main.cpp" << endl;
    }

    // Percorso del file README.md
    string readmeFilePath = projectName + "/README.md";

    // Crea e scrivi nel file README.md
    ofstream readmeFile(readmeFilePath);
    if (readmeFile.is_open())
    {
        readmeFile << "# Autore: Andrea Perciabosco\n";
        readmeFile << "# Classe: 2ESA\n";
        readmeFile << "# Descri: \"" << projectName << "\"\n";

        readmeFile.close();
        cout << "File README.md creato con successo." << endl;
    }
    else
    {
        cerr << "Errore nella creazione del file README.md" << endl;
    }

    // Crea la sottocartella build
    string buildDirPath = projectName + "/build";
    fs::create_directory(buildDirPath);
    cout << "Sottocartella 'build' creata con successo." << endl;

    // Percorso dello script execute.sh
    string scriptFilePath = projectName + "/execute.sh";

    // Crea e scrivi nel file execute.sh
    ofstream scriptFile(scriptFilePath);
    if (scriptFile.is_open())
    {
        scriptFile << "#!/bin/zsh\n\n";
        scriptFile << "# Controlla i parametri\n";
        scriptFile << "noBuild=false\n";
        scriptFile << "noRun=false\n";
        scriptFile << "for arg in \"$@\"; do\n";
        scriptFile << "  case $arg in\n";
        scriptFile << "    --noBuild)\n";
        scriptFile << "      noBuild=true\n";
        scriptFile << "      shift\n";
        scriptFile << "      ;;\n";
        scriptFile << "    --noRun)\n";
        scriptFile << "      noRun=true\n";
        scriptFile << "      shift\n";
        scriptFile << "      ;;\n";
        scriptFile << "  esac\n";
        scriptFile << "done\n\n";

        scriptFile << "# Fase di build\n";
        scriptFile << "if [ \"$noBuild\" = false ]; then\n";
        scriptFile << "  echo \"" << gray << "Compilazione..." << reset << "\"\n";
        scriptFile << "  g++ main.cpp -o build/main -std=c++17 \n";
        scriptFile << "  if [ $? -ne 0 ]; then\n";
        scriptFile << "    echo \"" << gray << "Errore nella compilazione." << reset << "\"\n";
        scriptFile << "    exit 1\n";
        scriptFile << "  fi\n";
        scriptFile << "  echo \"" << gray << "Compilazione completata." << reset << "\"\n";
        scriptFile << "fi\n\n";

        scriptFile << "# Fase di esecuzione\n";
        scriptFile << "if [ \"$noRun\" = false ]; then\n";
        scriptFile << "  echo \"" << gray << "Esecuzione..." << reset << "\"\n";
        scriptFile << "  ./build/main\n";
        scriptFile << "  if [ $? -ne 0 ]; then\n";
        scriptFile << "    echo \"" << gray << "Errore durante l'esecuzione." << reset << "\"\n";
        scriptFile << "    exit 1\n";
        scriptFile << "  fi\n";
        scriptFile << "  echo \"" << gray << "Esecuzione completata." << reset << "\"\n";
        scriptFile << "fi\n";

        scriptFile.close();

        // Rendi lo script eseguibile
        fs::permissions(scriptFilePath, fs::perms::owner_exec | fs::perms::owner_read | fs::perms::owner_write);

        cout << "Script execute.sh creato con successo." << endl;
    }
    else
    {
        cerr << "Errore nella creazione dello script execute.sh" << endl;
    }

    return 0;
}