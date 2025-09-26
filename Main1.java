//Подсчет элементов и сумма значений в списке
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
    public static void main(String[] args) {
        
        // Создаем список: 10 -> 20 -> 30 -> 40
        ListNode first = new ListNode(10);
        ListNode second = new ListNode(20);
        ListNode third = new ListNode(30);
        ListNode fourth = new ListNode(40);
        
        // Связываем узлы
        first.next = second;
        second.next = third;
        third.next = fourth;
        
        // Выводим список
        System.out.print("Список: ");
        ListNode current = first;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
        
        // Подсчитываем элементы
        int count = 0;
        current = first;  // начинаем с начала
        
        while (current != null) {
            count++;               // увеличиваем счетчик
            current = current.next; // переходим к следующему
        }
        
        System.out.println("Количество элементов: " + count);
        
        // Считаем сумму элементов
        int sum = 0;
        current = first;  // снова начинаем с начала
        
        while (current != null) {
            sum += current.data;   // добавляем значение к сумме
            current = current.next; // переходим к следующему
        }
        
        System.out.println("Сумма элементов: " + sum);
    }
}