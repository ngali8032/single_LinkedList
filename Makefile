a.out : main.o addbeg.o print.o addlast.o addAsc.o addDes.o deleteAll.o save.o sync.o reverse.o deleteANode.o findMiddle.o
        gcc main.o addbeg.o print.o addlast.o addAsc.o addDes.o deleteAll.o save.o sync.o reverse.o deleteANode.o findMiddle.o
main.o : main.c
        gcc -c main.c
addbeg.o : addbeg.c
        gcc -c addbeg.c
print.o : print.c
        gcc -c print.c
addlast.o : addlast.c
        gcc -c addlast.c
addAsc.o : addAsc.c
        gcc -c addAsc.c
addDes.o : addDes.c
        gcc -c addDes.c
deleteAll.o : deleteAll.c
        gcc -c deleteAll.c
save.o : save.c
        gcc -c save.c
sync.o : sync.c
        gcc -c sync.c
reverse.o : reverse.c
        gcc -c reverse.c
deleteANode.o : deleteANode.c
        gcc -c deleteANode.c
findMiddle.o : findMiddle.c
        gcc -c findMiddle.c
