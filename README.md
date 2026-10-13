# algoc_exercices

Exercices pour apprendre la **programmation en C++ et en AlgoC**, en partant de zéro.

## 🎯 Objectif

Ce dépôt accompagne le cours **AlgoC**. Chaque leçon contient :

- **Des exercices en C++** à faire dans le navigateur avec [Programiz](https://www.programiz.com/cpp-programming/online-compiler/), du plus simple au plus difficile.
- **Des exercices en AlgoC** à faire avec le robot.
- **Une démo interactive** : une petite page web pour *voir* la notion en action avant d'écrire du code.

Le but est de comprendre **pourquoi** chaque notion est utile, et pas seulement comment l'écrire, puis de savoir résoudre de petits problèmes, étape par étape.

## 🧪 Leçons

Ouvrez la démo **avant** de commencer les exercices de la leçon.

| # | Leçon | Démo | Exercices C++ | Exercices AlgoC |
|---|-------|------|---------------|-----------------|
| 1 | Les variables | [▶ Ouvrir la démo](https://marouane-lhamidi.github.io/variables-demo/) | [📂 Variables/cpp](./Variables/cpp) | [🤖 Variables/algoc](./Variables/algoc) |
| 2 | *Bientôt disponible* | — | — | — |
| 3 | *Bientôt disponible* | — | — | — |

<!-- Pour ajouter une leçon, copiez cette ligne et complétez-la :
| 2 | Les conditions | [▶ Ouvrir la démo](https://marouane-lhamidi.github.io/conditions-demo/) | [📂 Conditions/cpp](./Conditions/cpp) | [🤖 Conditions/algoc](./Conditions/algoc) |
-->

## 📝 Exercices de la leçon 1 — Les variables

| # | Exercice C++ | Ce que tu pratiques | Niveau |
|---|-------------|---------------------|--------|
| 1 | [ex01-age](./Variables/cpp/ex01-age/ex01-age.cpp) | Créer une variable et l'afficher | ●○○ |
| 2 | [ex02-points](./Variables/cpp/ex02-points/ex02-points.cpp) | Changer la valeur d'une variable | ●○○ |
| 3 | [ex03-steps](./Variables/cpp/ex03-steps/ex03-steps.cpp) | `++` et `--` | ●○○ |
| 4 | [ex04-types](./Variables/cpp/ex04-types/ex04-types.cpp) | Choisir le bon type : `int`, `float`, `char`, `bool` | ●●○ |
| 5 | [ex05-total](./Variables/cpp/ex05-total/ex05-total.cpp) | Calculer avec des variables | ●●○ |
| 6 | [ex06-ask-age](./Variables/cpp/ex06-ask-age/ex06-ask-age.cpp) | Lire une valeur avec `std::cin` | ●●○ |
| 7 | [ex07-birth-year](./Variables/cpp/ex07-birth-year/ex07-birth-year.cpp) | Calculer ton âge à partir de ton année de naissance | ●●○ |
| 8 | [ex08-basket](./Variables/cpp/ex08-basket/ex08-basket.cpp) | 🏆 Défi : le panier (prix × quantité) | ●●● |
| 9 | [ex09-swap](./Variables/cpp/ex09-swap/ex09-swap.cpp) | Échanger le contenu de deux variables | ●●● |

| # | Exercice AlgoC (robot) |
|---|------------------------|
| 1 | [Variable_ex_1](./Variables/algoc/Variable_ex_1/Variable_ex_1.ino) |
| 2 | [Variable_ex_2](./Variables/algoc/Variable_ex_2/Variable_ex_2.ino) |

## 📁 Organisation

```
algoc_exercices/
├── README.md
└── Variables/                      une leçon = un dossier
    ├── cpp/                        exercices C++ (Programiz)
    │   ├── ex01-age/ex01-age.cpp
    │   ├── ex02-points/ex02-points.cpp
    │   └── …
    └── algoc/                      exercices AlgoC (robot)
        ├── Variable_ex_1/Variable_ex_1.ino
        └── Variable_ex_2/Variable_ex_2.ino
```

- Chaque leçon a son dossier, avec un sous-dossier `cpp/` et un sous-dossier `algoc/`.
- Chaque exercice a son propre dossier, qui porte le même nom que le fichier.
- Les consignes sont **dans le code**, en anglais et en français (`// TASK 1:` / `// TÂCHE 1 :`).

## 💻 Faire un exercice C++ (Programiz)

1. Ouvrez l'exercice dans ce dépôt, puis copiez tout le code.
2. Ouvrez [Programiz](https://www.programiz.com/cpp-programming/online-compiler/) et remplacez le code de l'éditeur par celui de l'exercice.
3. Suivez les consignes `TASK` / `TÂCHE` écrites dans les commentaires.
4. Cliquez sur **Run** et vérifiez le résultat dans le panneau **Output**.
5. Pour les exercices qui posent une question (`std::cin`), tapez votre réponse dans le panneau **Output**, puis appuyez sur Entrée.

## 🤖 Faire un exercice AlgoC (robot)

1. Ouvrez le fichier `.ino` dans l'éditeur AlgoC.
2. Suivez les consignes écrites dans les commentaires.
3. Envoyez le programme sur le robot et observez ce qu'il fait.

## ✅ Méthode de travail

1. Ouvrez la démo de la leçon et testez-la.
2. Lisez les consignes dans le code de l'exercice.
3. Essayez de le résoudre **seul** d'abord.
4. Cliquez sur **Run**, puis testez avec différentes valeurs.
5. Si vous êtes bloqué, relisez la leçon ou demandez à votre enseignant.

---

👨‍🏫 Réalisé par **Marouane Lhamidi**
