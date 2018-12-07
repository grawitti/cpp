#include <iostream>

using namespace std;

void print_help() {
    cout << "Цель игры \"Охота на Вампуса\" - найти довольно смышленого монстра, " 
        << "прячущегося в темном пещерном лабиринте.\n" 
        << "Ваша задача - убить Вампуса с помошью лука и стрел.\n"
        << "Кроме Вампуса, пещера таит еще две опасности: бездонные ямы и гиганские летучие мыши.\n"
        << "Если вы входите в комнату с летучей мыщью, то она вас хватает и перебрасывает в другую комнату.\n"
        << "Если вы входите в комнату с бездонной ямой, то игра для вас закончена.\n"
        << "Если вы входите в комнату с Вампусом, то он съедает вас.\n"
        << "Входя в комнаты вы получаете предепреждения о грозящей в соседних комнатах опасности.\n";
    cout << "Правила игры:\n"
        << "У вас в распоряжении 5 стрел.\nНа кождом ходе вы можете или стрелять (s) или передвигаться (m).\n"
        << "Чтобы войти в комнату с номером 3 введите: m3\n"
        << "Чтобы стрелять в комнату 10 введите: s10\n"
        << "Чтобы выйти из игры введите: q\n";
        // cout << "Стрелять можно через 2 или 3 комнаты например: s2-6-12\n";
}

void print_room_info(int n, int room_b, int room_c, int next = -1) {
    cout << "Вы в " << n << " комнате." << endl
        << "Отсюда коридоры ведут в комнаты: ";
    if(n>=0) cout << next << ", ";
    cout << room_b << ", " << room_c << endl;
}

void print_step() {
    cout << "Ваш ход: ";
}

void print_rooms_range(int n) {
    cout << n << " комнаты нет в нашем лабиринте.\n";
}

void print_incorrect_room(int n) {
    cout << "Я не вижу прохода в " << n << " комнату!\n";
}

void print_wump_eat() {
    cout << "Вампус жадно набросился на вас и растерзал вклочья!\n";
}

void print_bat_catch(int n) {
    cout << "Вас схватила гигантская летучая мышь, и утащила в комнату: " << n << endl;;
}

void print_fall() {
    cout << "Вы свалились в бездонную яму.\n";
}

void print_wumpus_killed() {
    cout << "Вы убили Вампуса!\n";
}

void print_bat_killed(int a) {
    cout << "Вы убили гиганскую летучую мышь, больше она вам не помешает!\n";
}

void print_miss(int a) {
    cout << "Вы промахнулись, мазила ;р\n";
    cout << "У вас остолось " << a << " стрел(ы).\n";
}

void print_end_arrows() {
    cout << "У вас закончились стрелы, вы не можете стрелять!\n"; 
}