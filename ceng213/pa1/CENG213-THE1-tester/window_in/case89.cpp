#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab N = Tab("ggg", "tt","t");
wind->print();
wind->isEmpty();
Tab A = Tab("w", "w","b");
wind->moveActiveTabTo(4);
Tab L = Tab("m", "yyy","j");
wind->moveActiveTabTo(5);
Tab M = Tab("uu", "x","nn");
wind->print();
Tab J = Tab("o", "xx","ww");
wind->getActiveTab();
wind->isEmpty();
Tab X = Tab("y", "uuu","zz");
wind->isEmpty();
wind->changeActiveTabTo(2);
Tab C = Tab("uuu", "f","h");
wind->closeTab();
Tab R = Tab("z", "hhh","eee");
wind->changeActiveTabTo(3);
wind->newTab(A);
wind->moveActiveTabTo(0);
wind->print();
wind->moveActiveTabTo(2);
Tab S = Tab("c", "ii","ggg");
wind->closeTab();
Tab F = Tab("w", "mmm","pp");
wind->changeActiveTabTo(2);
Tab K = Tab("ppp", "lll","r");
wind->print();
Tab Y = Tab("r", "nn","ddd");
wind->print();
wind->getActiveTab();
wind->newTab(C);
Tab P = Tab("mmm", "c","y");
wind->moveActiveTabTo(0);
Tab V = Tab("p", "aaa","ff");
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(0);
wind->getActiveTab();
Tab E = Tab("uu", "w","oo");
wind->newTab(E);
Tab U = Tab("f", "i","qqq");
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(2);
Tab I = Tab("a", "f","ooo");
wind->moveActiveTabTo(0);
wind->newTab(F);
wind->newTab(I);
wind->print();
wind->getActiveTab();
Tab W = Tab("x", "ss","oo");
wind->getActiveTab();
wind->print();
Tab Q = Tab("pp", "xx","bb");
wind->closeTab();
Tab G = Tab("e", "sss","ll");
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->moveActiveTabTo(2);
Tab D = Tab("q", "xxx","cc");
wind->print();
wind->newTab(D);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
Tab H = Tab("www", "x","w");
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab B = Tab("ttt", "ggg","qqq");
wind->getActiveTab();
wind->print();
wind->newTab(B);
Tab O = Tab("hh", "nnn","xxx");
wind->moveActiveTabTo(2);
wind->newTab(G);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->print();
wind->newTab(H);
wind->print();
wind->getActiveTab();
Tab T = Tab("ww", "rrr","iii");
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->newTab(J);
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->newTab(K);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->newTab(L);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->isEmpty();
delete wind;
}
	return 0;
};