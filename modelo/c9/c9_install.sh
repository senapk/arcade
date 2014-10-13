#!/bin/bash
#apos clonar o repositorio no c9, rode esse script para habilitar o c++11, o motor e os scripts
sudo cp ./C++\ (simple).run ~/workspace/.c9/runners
sudo cp ./../../motor/cmotor.h /usr/local/include/
sudo cp ./../../motor/motor.h /usr/local/include/
sudo cp ./../scripts/kcheck.py /usr/local/bin
sudo cp ./../scripts/kcomposer.py /usr/local/bin
sudo cp ./../scripts/kcheck.py /usr/local/bin
sudo cp ./../scripts/kfix.py /usr/local/bin

