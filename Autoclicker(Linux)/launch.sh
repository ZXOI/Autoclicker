clear
echo Loading...
g++ ./Autoclicker.cpp -o ./Autoclicker
g++ ./Quitingdetecter.cpp -o ./Quitingdetecter
clear
./Quitingdetecter &
./Autoclicker
# exit