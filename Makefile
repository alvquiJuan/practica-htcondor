all:  seno coseno colector storef
seno:
        gcc -lm seno.c -o seno
coseno:
        gcc -lm coseno.c -o coseno
colector:
        gcc -lm colector.c -o colector
storef:
        gcc -lm storef.c -o storef
clean:
        rm -rf seno coseno colector coseno.txt seno.txt
