# 42 Piscine

### Ce repo compile mon travail sur les piscines de Juillet et Septembre 2024.

⚠️  Comme beaucoup d'étudiants qui rejoignent 42, j'apprends en cours de route de nombreux concepts que je n'avais pas avant de venir.
Mon expérience de code se limitait à des bases de html/CSS/JS et à quelques années de python.

🔴  Ce travail n'est donc pas un gage de qualité, que mes résultats à la moulinette soient bon ou pas, si vous copiez, c'est à vos risques et périls. 
Je ne suis en aucun cas responsable si vous recevez un -42 ou si votre projet ne passe pas à la moulinette.

✅ Quand j'en aurais le temps j'essaierai de fournir des explications détaillés sur le fonctionnemente et le raisonnement de mon code, pour que ceux qui cherchent un support pour apprendre pendant leur piscine, puissent trouver dans ce repo plus que juste des réponses à des exercices.

💪 Codez par vous-même ! Essayez au maximum d'apprendre en cherchant d'abord les concept fondamentaux et faite un projet à votre sauce. C'est en forgeant qu'on devient forgeron, c'est en codant que vous deviendrez développeurs !

Les sujets le répètent souvent et personnellement je m'y suis mis trop tard à mon goût mais utiliez la commande "man" ! Elle ne vous lâchera jamais parce que même en exam vous pouvez vous en servir (et ça c'est god tier vu qu'on a pas internet).

Les mans qui m'ont sauvé à de multiples reprises :
man ascii / man limits.h (attention l'int min c'est -2 147 483 648, le man dit une bêtise sur ça)

Quand le sujet vous dit "reproduisez le fonctionnement de x fonction", tester la votre avec l'originale, c'est autant valable pour votre piscine que le cursus. Pour importer une fonction qui vous intéresse de la lib C, vous pouvez trouver son include dans le man correspondant au tout début.

exemple : pour ft_strcmp, vous pouvez trouver strcmp en faisant ``man strcmp`` dans votre terminal. En voici un cours extrait
```
SYNOPSIS
     #include <string.h>

     int
     strcmp(const char *s1, const char *s2);

     int
     strncmp(const char *s1, const char *s2, size_t n);
```
Vous voyez donc que pour inclure dans votre projet strcmp, il vous faut include string.h

### NOUVEAU !

Ce repo comporte à présent des explications sur le code pour vous aider dans votre apprentissage.
Ces explications sont faites à partir de mes connaissances propres, ne les buvez pas comme un savoir universel, pensez à couper ces descriptions avec internet et les documentations officielles de C. Comme vous j'apprends encore ! J'essaie simplement de poser sur papier les choses que je "pense" savoir et qui m'ont permis d'expliquer durant ma piscine à mes pairs mon code !


### Complétion du C
|   Module   | Moulinette |
|------------|------------|
|    C00     |  ✅ 85%   |
|    C01     |  ✅ 85%   |
|    C02     |  ✅ 65%   |
|    C03     |  ✅ 75%   |
|    C04     |  ✅ 70%   |
|    C05     |  ✅ 80%   |
|    C06     |  ✅ 70%   |
|    C07     |  ✅ 52%   |
|    C08     |  ✅ 100%  |
|    C09     |  ❌       |
|    C10     |  ❌       |
|    C11     |  ❌       |
|    C12     |  ❌       |
|    C13     |  ❌       |

### Notes d'exams
|   Module   | PISCINE | RETRY |
|------------|---------|------------|
|   Exam00   | ✅ 40%  | ✅ 100% |
|   Exam01   | ✅ 40%  | ✅ 80%  |
|   Exam02   | ✅ 40%  | ✅ 80%  |
|   ExamFI   | ✅ 54%  | ✅ 66%  |

### Et après ?
Vous êtes reçu, vous appréciez ce repo et vous voulez voir la suite de l'aventure ?
Vous pouvez faire un tour sur [42 Cursus](https://github.com/LeSpatiocorne/42_cursus).
