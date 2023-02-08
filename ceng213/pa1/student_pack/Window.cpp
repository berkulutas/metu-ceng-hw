#include "Window.h"

Window::Window() {
    this->activeTab = 0;
    tabs.append(Tab());
}

Tab Window::getActiveTab() {
    // TODO
}

bool Window::isEmpty() const {
    // TODO
}

void Window::newTab(const Tab &tab) {
    // TODO
}

void Window::closeTab() {
    // TODO
}

void Window::moveActiveTabTo(int index) {
    // TODO
}

void Window::changeActiveTabTo(int index) {
    // TODO
}

void Window::addTab(Node<Tab> &tab) {
    // TODO
}

void Window::print() {
    if(tabs.isEmpty()) std::cout << "Window is empty" << std::endl;
    else std::cout << "The active tab is tab " << activeTab << std::endl;
    tabs.print();
}
