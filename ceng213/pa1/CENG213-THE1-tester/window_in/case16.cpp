#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab J = Tab("fff", "ff","k");
wind->print();
Tab C = Tab("dd", "ff","iii");
wind->changeActiveTabTo(4);
Tab Y = Tab("gg", "yyy","ee");
wind->newTab(C);
Tab W = Tab("aa", "nnn","mm");
wind->changeActiveTabTo(0);
Tab G = Tab("gg", "w","eee");
wind->closeTab();
Tab R = Tab("z", "oo","eee");
wind->changeActiveTabTo(1);
wind->print();
Tab M = Tab("zzz", "yyy","qqq");
wind->closeTab();
wind->closeTab();
wind->print();
wind->print();
Tab A = Tab("ee", "f","xx");
wind->changeActiveTabTo(2);
Tab N = Tab("eee", "jjj","rrr");
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
Tab U = Tab("xxx", "v","m");
wind->getActiveTab();
wind->getActiveTab();
wind->print();
Tab E = Tab("mm", "b","kk");
wind->isEmpty();
Tab O = Tab("j", "qqq","ff");
wind->getActiveTab();
Tab F = Tab("ddd", "b","oo");
wind->newTab(A);
wind->getActiveTab();
Tab I = Tab("bb", "bb","hh");
wind->newTab(E);
wind->moveActiveTabTo(0);
Tab B = Tab("qqq", "o","kkk");
wind->closeTab();
wind->changeActiveTabTo(2);
Tab V = Tab("pp", "ccc","ww");
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(2);
Tab L = Tab("h", "uuu","vvv");
wind->newTab(B);
wind->getActiveTab();
Tab Z = Tab("ss", "u","y");
wind->print();
Tab P = Tab("ddd", "ggg","mm");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->closeTab();
Tab T = Tab("ii", "r","xxx");
wind->changeActiveTabTo(2);
wind->newTab(F);
wind->newTab(G);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->newTab(I);
wind->changeActiveTabTo(2);
Tab S = Tab("qq", "www","bbb");
wind->changeActiveTabTo(5);
wind->print();
wind->changeActiveTabTo(5);
Tab H = Tab("ee", "ooo","www");
wind->print();
wind->moveActiveTabTo(4);
Tab D = Tab("hhh", "dd","qqq");
wind->moveActiveTabTo(0);
wind->newTab(D);
wind->print();
wind->newTab(H);
wind->print();
wind->moveActiveTabTo(2);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->print();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->print();
wind->changeActiveTabTo(0);
wind->print();
wind->closeTab();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->newTab(J);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->newTab(L);
wind->newTab(M);
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->isEmpty();
delete wind;
}
	return 0;
};