#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab N = Tab("s", "yyy","i");
wind->isEmpty();
Tab Z = Tab("c", "ss","ooo");
wind->getActiveTab();
Tab C = Tab("ccc", "ccc","oo");
wind->getActiveTab();
Tab G = Tab("xxx", "qqq","z");
wind->moveActiveTabTo(5);
Tab K = Tab("zz", "ppp","gg");
wind->newTab(C);
Tab B = Tab("o", "f","f");
wind->print();
wind->print();
wind->closeTab();
wind->changeActiveTabTo(3);
Tab Y = Tab("i", "hh","c");
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->newTab(B);
wind->isEmpty();
Tab Q = Tab("n", "xxx","dd");
wind->newTab(G);
wind->isEmpty();
Tab A = Tab("ttt", "bbb","uu");
wind->closeTab();
Tab H = Tab("w", "ff","qqq");
wind->closeTab();
wind->newTab(A);
Tab D = Tab("rr", "u","uuu");
wind->print();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(3);
Tab M = Tab("vvv", "lll","ttt");
wind->print();
Tab V = Tab("e", "w","lll");
wind->moveActiveTabTo(4);
wind->isEmpty();
Tab E = Tab("d", "g","yyy");
wind->newTab(D);
wind->newTab(E);
Tab X = Tab("bbb", "g","b");
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(1);
Tab O = Tab("yyy", "yy","h");
wind->newTab(H);
Tab T = Tab("r", "hhh","gg");
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->changeActiveTabTo(2);
Tab I = Tab("kkk", "nnn","fff");
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(2);
Tab S = Tab("eee", "ccc","dd");
wind->print();
Tab J = Tab("aaa", "hh","rr");
wind->isEmpty();
wind->getActiveTab();
Tab U = Tab("ww", "vv","qqq");
wind->changeActiveTabTo(3);
wind->closeTab();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->newTab(I);
wind->print();
wind->isEmpty();
wind->print();
wind->newTab(J);
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab L = Tab("ccc", "uu","p");
wind->moveActiveTabTo(2);
wind->print();
wind->isEmpty();
wind->closeTab();
Tab R = Tab("hhh", "k","a");
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->isEmpty();
wind->newTab(K);
wind->newTab(L);
wind->newTab(M);
wind->closeTab();
wind->closeTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->newTab(N);
wind->moveActiveTabTo(2);
Tab P = Tab("ccc", "bb","ee");
wind->newTab(O);
wind->getActiveTab();
wind->closeTab();
wind->newTab(P);
wind->closeTab();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->newTab(Q);
wind->newTab(R);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->newTab(S);
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->newTab(T);
wind->print();
wind->newTab(U);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->closeTab();
delete wind;
}
	return 0;
};