#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab N = Tab("w", "uuu","ttt");
wind->closeTab();
Tab Z = Tab("vvv", "aaa","ccc");
wind->moveActiveTabTo(1);
Tab H = Tab("ddd", "aa","ss");
wind->closeTab();
Tab A = Tab("xxx", "ww","v");
wind->newTab(A);
Tab T = Tab("ddd", "ggg","iii");
wind->moveActiveTabTo(3);
Tab D = Tab("bbb", "aa","yyy");
wind->isEmpty();
Tab X = Tab("ll", "lll","tt");
wind->moveActiveTabTo(0);
Tab J = Tab("xxx", "h","iii");
wind->moveActiveTabTo(0);
Tab P = Tab("lll", "yyy","v");
wind->closeTab();
wind->moveActiveTabTo(1);
Tab B = Tab("kkk", "s","yyy");
wind->moveActiveTabTo(5);
wind->getActiveTab();
Tab W = Tab("hh", "h","nnn");
wind->newTab(B);
wind->isEmpty();
Tab R = Tab("l", "zz","tt");
wind->newTab(D);
wind->moveActiveTabTo(5);
Tab Q = Tab("cc", "r","s");
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->print();
wind->closeTab();
wind->closeTab();
Tab L = Tab("zzz", "xxx","xx");
wind->closeTab();
wind->closeTab();
Tab O = Tab("vv", "rrr","c");
wind->print();
Tab S = Tab("u", "ggg","g");
wind->print();
wind->getActiveTab();
Tab F = Tab("zzz", "ooo","ccc");
wind->newTab(F);
Tab U = Tab("q", "uu","r");
wind->print();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->newTab(H);
wind->moveActiveTabTo(4);
wind->newTab(J);
wind->closeTab();
wind->closeTab();
Tab V = Tab("lll", "qq","rrr");
wind->print();
Tab E = Tab("yyy", "ttt","mmm");
wind->getActiveTab();
Tab I = Tab("fff", "i","o");
wind->newTab(E);
Tab K = Tab("f", "p","jjj");
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(I);
wind->print();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(3);
wind->isEmpty();
Tab Y = Tab("lll", "yyy","q");
wind->newTab(K);
wind->closeTab();
wind->print();
wind->newTab(L);
wind->print();
wind->isEmpty();
wind->print();
wind->newTab(N);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(0);
wind->newTab(O);
wind->getActiveTab();
wind->closeTab();
Tab G = Tab("ppp", "rrr","zzz");
wind->print();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->changeActiveTabTo(0);
wind->newTab(G);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->print();
wind->newTab(P);
wind->newTab(Q);
wind->closeTab();
Tab M = Tab("vv", "gg","pp");
wind->moveActiveTabTo(2);
wind->newTab(M);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->print();
wind->moveActiveTabTo(5);
Tab C = Tab("m", "ccc","qqq");
delete wind;
}
	return 0;
};