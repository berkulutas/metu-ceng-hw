#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab L = Tab("dd", "ccc","gg");
wind->closeTab();
wind->moveActiveTabTo(3);
Tab I = Tab("lll", "r","oo");
wind->closeTab();
Tab T = Tab("xxx", "y","ee");
wind->newTab(I);
Tab G = Tab("r", "cc","d");
wind->changeActiveTabTo(2);
Tab D = Tab("jjj", "hh","i");
wind->isEmpty();
wind->moveActiveTabTo(2);
Tab U = Tab("zz", "uu","qq");
wind->print();
wind->isEmpty();
Tab N = Tab("bbb", "ll","ss");
wind->getActiveTab();
Tab Y = Tab("ccc", "ppp","ee");
wind->getActiveTab();
wind->getActiveTab();
Tab E = Tab("hh", "j","nnn");
wind->isEmpty();
Tab K = Tab("xxx", "ppp","y");
wind->print();
wind->changeActiveTabTo(2);
wind->isEmpty();
Tab R = Tab("ee", "ww","aaa");
wind->changeActiveTabTo(0);
wind->isEmpty();
Tab Q = Tab("xxx", "iii","bb");
wind->print();
wind->getActiveTab();
wind->isEmpty();
Tab X = Tab("y", "jjj","ooo");
wind->isEmpty();
wind->getActiveTab();
Tab H = Tab("qq", "uu","e");
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(0);
Tab F = Tab("ooo", "lll","yy");
wind->newTab(D);
wind->changeActiveTabTo(0);
wind->newTab(E);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->newTab(F);
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->print();
Tab A = Tab("mm", "y","qqq");
wind->print();
wind->getActiveTab();
Tab Z = Tab("uuu", "nnn","vvv");
wind->moveActiveTabTo(5);
Tab V = Tab("gg", "g","j");
wind->closeTab();
wind->isEmpty();
Tab S = Tab("uu", "y","ss");
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(0);
Tab W = Tab("hh", "k","x");
wind->changeActiveTabTo(2);
wind->print();
wind->print();
wind->moveActiveTabTo(4);
wind->newTab(A);
wind->getActiveTab();
wind->closeTab();
Tab J = Tab("rrr", "eee","nnn");
wind->getActiveTab();
wind->print();
wind->isEmpty();
Tab P = Tab("www", "f","c");
wind->newTab(G);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(H);
wind->closeTab();
wind->isEmpty();
wind->newTab(J);
wind->newTab(K);
wind->print();
wind->changeActiveTabTo(5);
wind->print();
wind->newTab(L);
Tab C = Tab("q", "e","oo");
wind->closeTab();
wind->newTab(C);
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(2);
wind->print();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->closeTab();
wind->newTab(N);
wind->newTab(P);
wind->print();
Tab O = Tab("sss", "ff","d");
delete wind;
}
	return 0;
};