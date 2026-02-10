#Ok Boomer !
Écrire un programme C qui demande son âge à l’utilisateur et affiche :

Ok Boomer! si l’âge est supérieur à 42 et Time to learn UNIX sinon.



#Un jeu basique
Cherchez comment obtenir un nombre au hasard entre 1 et 10 en C.

Écrire un programme qui :

Tire un nombre au hasard entre 1 et 10
Demande un nombre à l’utilisateur
Affiche plus petit, plus grand, trouvé ! selon le cas
En C comme en Python : plus petit, plus grand, égal se teste avec <, >, ==
Aléatoire ou pas : https://fr.wikipedia.org/wiki/Pseudo-al%C3%A9atoire

Du vrai hasard : https://fr.wikipedia.org/wiki/Lavarand (il existe des composants contenant une petite quantité de matériel radioactif qui fournit du "vrai" hasard)

$ apropos random
$ man 3 rand
rand renvoie un nombre entier entre 0 et RAND_MAX.

À partir d'un nombre entier tiré au sort entre 0 et XXX comment vous pouvez obtenir un nombre entre 1 et 10... La clef c'est l'opération modulo (l'arithmétique de l'horloge). n % 10 + 1 est toujours compris entre 1 et 10.
