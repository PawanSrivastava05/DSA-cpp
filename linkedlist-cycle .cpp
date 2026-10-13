#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        for (ListNode *s = head, *f = head; f && f->next; s = s->next, f = f->next->next)
            if (s == f) return true;
        return false;
    }
};

int main() {
    Solution sol;

    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    head->next->next->next->next = head->next;

    if (sol.hasCycle(head)) {
        cout << "True (Cycle detected)" << endl;
    } else {
        cout << "False (No cycle)" << endl;
    }

    return 0;
}
