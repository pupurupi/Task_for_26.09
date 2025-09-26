//Подсчет элементов и сумма значений в списке
#include <iostream>

// Узел списка
struct Node {
    int data;
    Node* next;
};

int main() {
    
    // Создаем список: 10 -> 20 -> 30 -> 40
    Node* first = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};
    Node* fourth = new Node{40, nullptr};
    
    // Связываем узлы
    first->next = second;
    second->next = third;
    third->next = fourth;
    
    // Выводим список
    std::cout << "Список: ";
    Node* current = first;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    
    // Подсчитываем элементы
    int count = 0;
    current = first;  // начинаем с начала
    
    while (current != nullptr) {
        count++;                // увеличиваем счетчик
        current = current->next; // переходим к следующему
    }
    
    std::cout << "Количество элементов: " << count << std::endl;// вывод
    
    // Считаем сумму элементов
    int sum = 0;
    current = first;  // снова начинаем с начала
    
    while (current != nullptr) {
        sum += current->data;   // добавляем значение к сумме
        current = current->next; // переходим к следующему
    }
    
    std::cout << "Сумма элементов: " << sum << std::endl;//вывод
    
    // Очищаем память
    delete first;
    delete second;
    delete third;
    delete fourth;
    
    return 0;
}