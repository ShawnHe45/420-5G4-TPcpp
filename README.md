# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de donner chemin vers le repertoire data avec l'application `bibliotheque -d <chemin verrs data>`


# Shawn-Matthew Heng
## Veille technologie
### C++ non ou peu vu en cours
Une notion C++ que je crois qu'on n'a pas vu, ou pas assez vu, en classe est les fichiers '.o'.  Les fichiers .o sont des fichiers générés par le compilateur.  Un fichier .o traduit les instructions d'un seul fichier source c++ (.cpp), donc le compilateur génère des fichiers .o selon le nombre de fichiers .cpp.  C'est utilisé comme un fichier intermédiare, car il contient du code binaire.  Ce code binaire contient les références qui font appel à un fonction ou une variable des autres fichiers et les liens entre tous les fichier .o.  Après de faire les liens, les fichiers .o se assemblent pour former un seul fichier exécutable, ce qui permet d'exécuter le projet.
En bref, les fichiers .o sont des fichiers générés par le compilateur qui nous permettent d'exécuter le projet.

### Options de développement possible (Une autre solution technologie plus adaptée que le C++)