# getupeveryhour

so simple program notifies you every hour

## virus detection
because of it's such a small program notifies 3 times in every hour windows defender accuses it's a virus.

## do you have trust issues like me?
### build from source

compile it from source 
download the code
download visual studio 2022
select c++ desktop development for install 
open by typing developer prompt to taskbar
cd to where you download main.c
```
cl /O1 /Os /EHsc /D_CRT_SECURE_NO_WARNINGS main.c user32.lib shell32.lib /link /SUBSYSTEM:WINDOWS
```

enter the command for compiling source code
you can execute it now knowing it's safe.
