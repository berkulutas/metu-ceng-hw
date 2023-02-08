#include "Browser.h"

/* your browser implementation here */
Browser::Browser() {
    windows.append(Window());
}

void Browser::newWindow() {
    // TODO
    windows.prepend(Window());
}

void Browser::closeWindow() {
    // TODO
    if (windows.isEmpty()) return;
    windows.removeNodeAtIndex(0);
}

void Browser::switchToWindow(int index) {
    // TODO
    windows.moveToIndex(index, 0);
}

Window &Browser::getWindow(int index) {
    return windows.getNodeAtIndex(index) -> data;
}

void Browser::moveTab(Window &from, Window &to) {
    // TODO
    to.newTab(from.getActiveTab());
    from.closeTab();
}

void Browser::mergeWindows(Window &window1, Window &window2) {
    // TODO
    
    while(!window2.isEmpty())
    {
        window2.changeActiveTabTo(0); 
        window1.newTab(window2.getActiveTab()); //assuming the last tab of the window that will receive the tab(s)  
        window2.closeTab();                     //  is already the activeTab, and use the newTab function.
    }
}

void Browser::mergeAllWindows() {
    // TODO
    if (windows.isEmpty()) return; 
    for(int i = 1; i < this->windows.getSize();  i++)
    {
        mergeWindows(getWindow(0), getWindow(i));
    }
}

void Browser::closeAllWindows() {
    // TODO
    windows.removeAllNodes(); 
}

void Browser::closeEmptyWindows() {
    // TODO
    for(int i = windows.getSize()-1; i >= 0; i--)
    {
        if(getWindow(i).isEmpty()) windows.removeNodeAtIndex(i);
    }
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