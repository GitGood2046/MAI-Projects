#!/bin/bash

# Присваивание значений переменным и подстановка значений переменных

a=375
hello=$a

#-------------------------------------------------------------------------
# Использование пробельных символов
# с обеих сторон символа "=" присваивания недопустимо.

#  Если записать "VARIABLE =value",
#+ то интерпретатор попытается выполнить команду "VARIABLE" с параметром "=value".

#  Если записать "VARIABLE= value",
#+ то интерпретатор попытается установить переменную окружения "VARIABLE" в ""
#+ и выполнить команду "value".
#-------------------------------------------------------------------------


echo hello    # Это не ссылка на переменную, выведет строку "hello".

echo $hello
echo ${hello} # Идентично предыдущей строке.

echo "$hello"
echo "${hello}"

echo

hello="A B  C   D"
echo $hello   # A B C D
echo "$hello" # A B  C   D
# Здесь вы сможете наблюдать различия в выводе echo $hello и echo "$hello".
# Заключение ссылки на переменную в кавычки сохраняет пробельные символы.

echo

echo '$hello'  # $hello
# Внутри одинарных кавычек не производится подстановка значений переменных,
#+ т.е. "$" интерпретируется как простой символ.

# Обратите внимание на различия, существующие между этими типами кавычек.


hello=    # Запись пустого значения в переменную.
echo "\$hello (пустое значение) = $hello"
#  Обратите внимание: запись пустого значения -- это не то же самое,
#+ что сброс переменной, хотя конечный результат -- тот же (см. ниже).

# --------------------------------------------------------------

#  Допускается присваивание нескольких переменных в одной строке,
#+ если они отделены пробельными символами.
#  Внимание! Это может снизить читабельность сценария и оказаться непереносимым.

var1=variable1  var2=variable2  var3=variable3
echo
echo "var1=$var1   var2=$var2  var3=$var3"

# Могут возникнуть проблемы с устаревшими версиями "sh".

# --------------------------------------------------------------

echo; echo

numbers="один два три"
other_numbers="1 2 3"
# Если в значениях переменных встречаются пробелы,
# то использование кавычек обязательно.
echo "numbers = $numbers"
echo "other_numbers = $other_numbers"   # other_numbers = 1 2 3
echo

echo "uninitialized_variable = $uninitialized_variable"
# Неинициализированная переменная содержит "пустое" значение.
uninitialized_variable=   #  Объявление неинициализированной переменной
                          #+ (то же, что и присваивание пустого значения, см. выше).
echo "uninitialized_variable = $uninitialized_variable"
                          # Переменная содержит "пустое" значение.

uninitialized_variable=23       # Присваивание.
unset uninitialized_variable    # Сброс.
echo "uninitialized_variable = $uninitialized_variable"
                                # Переменная содержит "пустое" значение.

echo

echo "$uninitialized"                                # (пустая строка)
let "uninitialized += 5"                             # Прибавить 5.
echo "$uninitialized"                                # 5

#  Заключение:
#  Неинициализированные переменные не имеют значения, однако
#+ в арифметических операциях за значение таких переменных принимается число 0.
#  Это недокументированная (и возможно непереносимая) возможность.

exit 0
