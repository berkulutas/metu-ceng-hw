#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab P = Tab("d", "s","l");
wind->isEmpty();
Tab K = Tab("ii", "l","yyy");
wind->newTab(K);
Tab G = Tab("jjj", "nn","ccc");
wind->moveActiveTabTo(4);
Tab W = Tab("ff", "y","aaa");
wind->closeTab();
Tab O = Tab("jjj", "lll","ff");
wind->newTab(G);
Tab S = Tab("gg", "d","t");
wind->changeActiveTabTo(3);
Tab H = Tab("ttt", "f","oo");
wind->getActiveTab();
Tab Y = Tab("ff", "b","eee");
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab N = Tab("mm", "ddd","u");
wind->newTab(H);
Tab M = Tab("zz", "u","o");
wind->newTab(M);
Tab R = Tab("m", "iii","a");
wind->closeTab();
Tab Q = Tab("ttt", "c","xx");
wind->closeTab();
Tab C = Tab("zzz", "ll","tt");
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->newTab(C);
wind->newTab(N);
Tab L = Tab("ccc", "eee","fff");
wind->getActiveTab();
wind->moveActiveTabTo(1);
Tab A = Tab("ggg", "rrr","eee");
wind->getActiveTab();
wind->newTab(A);
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->newTab(L);
wind->isEmpty();
wind->closeTab();
Tab J = Tab("ccc", "t","z");
wind->print();
wind->isEmpty();
Tab T = Tab("b", "fff","e");
wind->isEmpty();
wind->moveActiveTabTo(2);
Tab D = Tab("sss", "sss","nnn");
wind->closeTab();
wind->newTab(D);
wind->moveActiveTabTo(0);
wind->print();
wind->changeActiveTabTo(1);
Tab B = Tab("yy", "mm","ww");
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(1);
Tab U = Tab("t", "pp","fff");
wind->closeTab();
Tab Z = Tab("o", "f","kk");
wind->newTab(B);
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(4);
Tab E = Tab("ppp", "ss","ooo");
wind->moveActiveTabTo(1);
Tab I = Tab("ccc", "j","vv");
wind->newTab(E);
wind->newTab(I);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->newTab(J);
wind->closeTab();
Tab V = Tab("hhh", "p","qqq");
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
Tab F = Tab("ss", "qq","x");
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->newTab(F);
wind->print();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->newTab(O);
wind->newTab(P);
delete wind;
}
	return 0;
};