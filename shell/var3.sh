#!/bin/bash

a=23              # Простейший случай
echo $a
b=$a
echo $b

# Теперь немного более сложный вариант (подстановка команд).

a=`echo Hello!`   # В переменную 'a' попадает результат работы команды 'echo'
echo $a
#  Обратите внимание на восклицательный знак (!) в подстанавливаемой команде
#+ этот вариант не будет работать при наборе в командной строке,
#+ поскольку здесь используется механизм "истории команд" BASH
#  Однако, в сценариях, механизм истории команд запрещен.

a=`ls -l`         # В переменную 'a' записывается результат работы команды 'ls -l'
echo $a           # Кавычки отсутствуют, удаляются лишние пробелы и пустые строки.
echo
echo "$a"         # Переменная в кавычках, все пробелы и пустые строки сохраняются.
                  # (См. главу "Кавычки.")

exit 0