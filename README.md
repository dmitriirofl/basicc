# Проектная работа по разработке кроссплатформенных программных систем 

Проект выполнен на языке C

# Windows

Чтобы запустить игру в Windows, вам нужно установить MinGW-w64, затем создать файл make.bat в каталоге, где находится ваш исходный код, и записать строки, перечисленные ниже:

- `PATH=path to mingw64/bin`
- `gcc -std=c99 -Wall -Wpedantic game.c`

Затем в VS Code откройте терминал и введите:
+ `./make.bat`

Запустится приложение `a.exe`:

![image](https://user-images.githubusercontent.com/121025589/208409376-b6b842d1-d2ab-4956-a1bd-44eae6d1246e.png)

# Linux

Протестировать игру на Linux можно в онлайн компиляторе Linux C :

![image](https://user-images.githubusercontent.com/121025589/208409431-401cd7cf-a672-4e60-8845-a2c8afcc74ea.png)

# WEB

Инструкции по установке с использованием emsdk

Основной драйвер Emscripten SDK (emsdk) представляет собой сценарий Python. Вы можете получить его в первый раз с

#Get the emsdk repo

git clone https://github.com/emscripten-core/emsdk.git

#Enter that directory

`cd emsdk`
Выполните следующие команды emsdk, чтобы получить последние инструменты с GitHub и сделать их активными:

- `git pull`
- `./emsdk install latest`
- `./emsdk activate latest`
- `source ./emsdk_env.sh`
В Windows запустите emsdk вместо `./emsdk` и `emsdk_env.bat` вместо исходного `./emsdk_env.sh.`

![image](https://user-images.githubusercontent.com/121025589/208409542-0579b70b-9229-425a-88c2-093f5a970ec7.png)
