#include "Browser.h"

Browser::Browser() {
    windows.append(Window());
}

void Browser::newWindow() {
    // TODO
}

void Browser::closeWindow() {
    // TODO
}

void Browser::switchToWindow(int index) {
    // TODO
}

Window &Browser::getWindow(int index) {
    return windows.getNodeAtIndex(index) -> data;
}

void Browser::moveTab(Window &from, Window &to) {
    // TODO
}

void Browser::mergeWindows(Window &window1, Window &window2) {
    // TODO
}

void Browser::mergeAllWindows() {
    // TODO
}

void Browser::closeAllWindows() {
    // TODO
}

void Browser::closeEmptyWindows() {
    // TODO
}

void Browser::print() {
    Node<Window> *head = windows.getFirstNode();
    if(head == NULL) {
        std::cout << "The browser is empty" << std::endl;
    } else {
        (head -> data).print();
        head = head -> next;
        while(head != windows.getFirstNode()) {
            (head -> data).print();
            head = head -> next;
        }
    }
}
