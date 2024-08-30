/**
 * deleteheadofll
 */
class Node {
    int data;
    Node next;

    Node(int data1, Node next1) {
        this.data = data1;
        this.next = next1;
    }

    Node(int data1) {
        this.data = data1;
        this.next = null;
    }
}
// Creating a linked list 
public static Node createLinkedList(int[] arr) {
    if (arr.length == 0)
        return null;
    Node head = new Node(arr[0]);
    Node current = head;
    for (int i = 1; i < arr.length; i++) {
        current.next = new Node(arr[i]);
        current = current.next;
    }
    return head;
}

// Delete Operation 
// 1. Delete head of a linked list 


public class deleteheadofll {
    private static void print(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }


    public static Node removeHead(Node head) {
        if (head == null) {
            return head;
        }
        head = head.next;
        return head;
    }
// 2 : Remove tail of linked list 

    public static Node removeTail(Node head) {
        if (head == null || head.next == null)
            return null;
        Node temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
        return head;
    }
//  3 : remove k in linked list 
    public static Node removeK(Node head, int k) {

        if (head == null)
            return head;
        if (k == 1) {
            return head;
        }
        int cnt = 0;
        Node temp = head;
        Node prev = null;
        while (temp != null) {
            cnt++;
            if (cnt == k) {
                prev.next = prev.next.next;
                break;
            }
            prev = temp;
            temp = prev.next;
        }
        return head;
    }
// 4 : remove element of linked list 
    public static Node removeEl(Node head, int el) {

        if (head == null)
            return head;
        if (head.data == el) {
            return head;
        }

        Node temp = head;
        Node prev = null;
        while (temp != null) {
            if (temp.data == el) {
                prev.next = prev.next.next;
                break;
            }
            prev = temp;
            temp = prev.next;
        }
        return head;
    }
// Insertion 
// 1: insert head of linked list 
    public static Node insertHead(Node head, int val) {
        Node temp = new Node(val, head);
        return temp;
    }
// 2: insert tail of linked list 
    public static Node insertTail(Node head, int val) {
        if (head == null)
            return new Node(val);
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        Node newNode = new Node(val);
        temp.next = newNode;
        return head;

    }
//  3: insert before value of linked list 
    public static Node insertBeforeValue(Node head, int el, int val) {
        if (head == null)
            return null;
        if (head.data == val) {
            return new Node(el, head);
        }
        Node temp = head;
        while (temp.next != null) {
            if (temp.next.data == val) {
                Node x = new Node(el, temp.next);
                temp.next = x;
                break;
            }
            temp = temp.next;
        }
        return head;
    }
// 4 : insert position of linked list 

    public static Node insertPosition(Node head, int el, int k) {
        if (head == null) {
            if (k == 1) {
                return new Node(el);
            } else {
                return head;
            }
        }
        if (k == 1)
            return new Node(el, head);

        int cnt = 0;
        Node temp = head;
        while (temp != null) {
            cnt++;
            if (cnt == (k - 1)) {
                Node x = new Node(el, temp.next);
                temp.next = x;
                break;
            }
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        int arr[] = { 15, 52, 4, 3, 5 };
        Node head = createLinkedList(arr);
        // Print original linked list
        System.out.println("Original Linked List:");
        print(head);

        // Remove head and print updated linked list
        // head = removeHead(head);
        // System.out.println("Linked List after removing head:");
        // print(head);

        // head = removeTail(head);
        // System.out.println("Linked List after removing tail");
        // print(head);

        // head = removeK(head, 3);
        // System.out.println("Linked List after removing k element ");
        // print(head);

        // head = removeEl(head, 5);
        // System.out.println("Linked List after removing element ");
        // print(head);

        // Insertion
        // head = insertHead(head,100);
        // print(head);

        // head = insertTail(head, 100);
        // print(head);

        // head = insertBeforeValue(head, 6, 5);    
        // print(head);


        head = insertPosition(head, 100, 2);
        print(head);

    }
}
