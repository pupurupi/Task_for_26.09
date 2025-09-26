//Создать список из нескольких чисел. Написать функцию, которая проверяет, есть ли заданное число в списке.
#include <iostream>

// Узел списка
struct Node {
    int data;
    Node* next;
};

// Функция для поиска элемента в списке
bool findNumber(Node* head, int target) {
    Node* current = head;  // начинаем с начала списка
    
    while (current != nullptr) {
        if (current->data == target) {  // current->data - это число, хранящееся в текущем узле
            return true;  //  если число найдено!
        }
        current = current->next;  // переходим к следующему
    }
    
    return false;  // когда число не найдено
}

int main() {

    // Создаем список: 5 -> 8 -> 12 -> 3 -> 7
    Node* first = new Node{5, nullptr};
    Node* second = new Node{8, nullptr};
    Node* third = new Node{12, nullptr};
    Node* fourth = new Node{3, nullptr};
    Node* fifth = new Node{7, nullptr};
    
    // Связываем узлы
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // Выводим список
    std::cout << "Список: ";
    Node* current = first;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    
    // Ищем числа в списке
    std::cout << "Поиск числа 12: " << (findNumber(first, 12) ? "Найдено" : "Не найдено") << std::endl;
    std::cout << "Поиск числа 20: " << (findNumber(first, 20) ? "Найдено" : "Не найдено") << std::endl;
    std::cout << "Поиск числа 3: " << (findNumber(first, 3) ? "Найдено" : "Не найдено") << std::endl;
    std::cout << "Поиск числа 1: " << (findNumber(first, 1) ? "Найдено" : "Не найдено") << std::endl;
    
    // Очищаем память
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
    
    return 0;
}