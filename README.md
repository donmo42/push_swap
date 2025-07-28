# push_swap

`push_swap` est un projet de l’école 42. Objectif : **trier une pile d'entiers en utilisant un nombre minimal d'opérations prédéfinies**.

## 🎯 Objectif

On dispose de deux piles : `A` (remplie initialement avec des nombres aléatoires) et `B` (vide).  
Le but : **trier la pile A dans l'ordre croissant** en n’utilisant qu’un ensemble limité d’instructions.

## 🛠️ Les opérations autorisées

### Swap :
- `sa`, `sb`, `ss` : échange les deux premiers éléments de A, B ou les deux.

### Push :
- `pa`, `pb` : pousse le haut d’une pile vers l’autre.

### Rotate :
- `ra`, `rb`, `rr` : fait monter tous les éléments d’un cran (déplace le haut vers le bas).

### Reverse Rotate :
- `rra`, `rrb`, `rrr` : fait descendre tous les éléments d’un cran (déplace le bas vers le haut).

<img src='img/2.webp'>
<img src='img/3.webp'>
<img src='img/4.webp'>
## 🔹 Gestion des petits cas (1 à 5 éléments)

### ✅ Cas de 3 éléments  
Seulement **5 combinaisons possibles**. J’ai analysé chaque situation et implémenté une **solution optimale**.

📸 Illustration :


<img src='img/1.webp'>

### ✅ Cas de 5 éléments  
Limite : **12 opérations maximum**, sinon la vérification échoue.

**Stratégie :**
1. Pousser les **2 plus petits** éléments dans la pile B.
2. Trier les **3 restants** dans A (comme pour le cas à 3).
3. **Replacer les 2 éléments** depuis B au bon endroit dans A.

📸 Exemple : tri de `[1, 5, 2, 4, 3]`  
<img src='img/6.webp'>

## 🚀 Cas généraux (6 à 1000 éléments) – Radix Sort

### 💡 Pourquoi le choix de Radix ?
- Rapide et adapté à de grands volumes.
- Fonctionne en binaire, parfait pour les opérations limitées du projet.
- Ne nécessite pas de comparaisons directes.

### 🔧 Étapes de l'algorithme

#### 1. `normalize_tab` – Normalisation des données  
Chaque nombre est remplacé par **son indice** dans le tableau trié.  
Ex : `[42, 12, 80]` devient `[1, 0, 2]`.

#### 2. Calcul du nombre de bits  
Permet de savoir combien de passes seront nécessaires pour trier tous les éléments en binaire.

#### 3. Tri avec Radix  
Pour chaque bit (du moins significatif au plus significatif) :
- Pousser dans B les éléments dont le bit courant = 0.
- Laisser dans A ceux dont le bit = 1.
- Puis tout **rebasculer dans A**.

On répète l’opération pour chaque bit.

📘 Tutoriel illustré ici :  
🔗 [Push Swap Tutorial – Medium](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)






### Compilation
```bash

make

./push_swap 3 2 1

Vérification avec le checker

./push_swap 3 2 1 | ./checker 3 2 1


./push_swap 3 2 1 | wc -l

