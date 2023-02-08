#include "Window.h"

/* your window implementation daddy 🥺 */
Window::Window() {
    this->activeTab = 0;
    tabs.append(Tab());
}

Tab Window::getActiveTab() {
    // TODO
    if (tabs.isEmpty()) return Tab();
    else
    {
        return tabs.getNodeAtIndex(activeTab)->data;
    }
}

bool Window::isEmpty() const {
    // TODO
    return tabs.isEmpty();
}

void Window::newTab(const Tab &tab) {
    // TODO
    tabs.insertAtIndex(tab, ++activeTab);
}

void Window::closeTab() {
    // TODO
    if (tabs.isEmpty()) return;
    if ((tabs.getSize() == 1))
    {
        if (activeTab != 0) return; 
        tabs.removeNodeAtIndex(activeTab);
        activeTab = -1; 
    }
    else
    {
        if(tabs.getNodeAtIndex(activeTab) == tabs.getLastNode())
        {
            tabs.removeNodeAtIndex(activeTab);
            activeTab--; 
        }
        else 
        {
            tabs.removeNodeAtIndex(activeTab); // after removal new active is in the index
        }
    }
}

void Window::moveActiveTabTo(int index) {
    // TODO
    if(activeTab >= 0)
    {
        tabs.moveToIndex(activeTab, index);
        if (index >= tabs.getSize()-1) activeTab = tabs.getSize()-1;
        else activeTab = index; 
    }
}

void Window::changeActiveTabTo(int index) {
    // TODO
    if ((0 <= index) && (index <= tabs.getSize()-1)) activeTab = index; 
}

void Window::addTab(Node<Tab> &tab) {
    // TODO
    if(isEmpty()) activeTab = 0; 
    tabs.append(tab.data);
}

void Window::print() {
    if(tabs.isEmpty()) std::cout << "Window is empty" << std::endl;
    else std::cout << "The active tab is tab " << activeTab << std::endl;
    tabs.print();
}
