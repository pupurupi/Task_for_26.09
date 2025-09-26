class ListNode {
    int data;
    ListNode next;
    
    // Конструктор класса - специальный метод для создания новых узлов
    ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}

public class Main {
    // Функция для поиска элемента в списке
    public static boolean findNumber(ListNode head, int target) {
        ListNode current = head;  // начинаем с начала списка
        
        while (current != null) {
            if (current.data == target) {
                return true;  // число найдено!
            }
            current = current.next;  // переходим к следующему
        }
        
        return false;  // число не найдено
    }
    
    public static void main(String[] args) {

        // Создаем список: 5 -> 8 -> 12 -> 3 -> 7
        ListNode first = new ListNode(5);
        ListNode second = new ListNode(8);
        ListNode third = new ListNode(12);
        ListNode fourth = new ListNode(3);
        ListNode fifth = new ListNode(7);
        
        // Связываем узлы
        first.next = second;
        second.next = third;
        third.next = fourth;
        fourth.next = fifth;
        
        // Выводим список
        System.out.print("Список: ");
        ListNode current = first;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
        
        // Ищем числа в списке
        System.out.println("Поиск числа 12: " + (findNumber(first, 12) ? "Найдено" : "Не найдено"));
        System.out.println("Поиск числа 20: " + (findNumber(first, 20) ? "Найдено" : "Не найдено"));
        System.out.println("Поиск числа 3: " + (findNumber(first, 3) ? "Найдено" : "Не найдено"));
        System.out.println("Поиск числа 1: " + (findNumber(first, 1) ? "Найдено" : "Не найдено"));
    }
}