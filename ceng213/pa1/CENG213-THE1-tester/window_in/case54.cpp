#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(1);
Tab A = Tab("jj", "uuu","rr");
wind->print();
Tab C = Tab("i", "ff","nn");
wind->newTab(A);
Tab H = Tab("f", "a","zzz");
wind->moveActiveTabTo(3);
Tab O = Tab("www", "ccc","www");
wind->changeActiveTabTo(4);
Tab T = Tab("e", "kk","z");
wind->newTab(C);
Tab F = Tab("kk", "g","ddd");
wind->isEmpty();
wind->newTab(F);
Tab Y = Tab("j", "yyy","n");
wind->newTab(H);
Tab P = Tab("qqq", "jjj","zz");
wind->print();
Tab Q = Tab("f", "ggg","bbb");
wind->changeActiveTabTo(2);
wind->newTab(O);
wind->getActiveTab();
Tab E = Tab("bbb", "eee","ll");
wind->print();
Tab S = Tab("zzz", "zzz","qq");
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(5);
Tab Z = Tab("zz", "y","ooo");
wind->isEmpty();
wind->changeActiveTabTo(0);
Tab W = Tab("uuu", "gg","jj");
wind->isEmpty();
Tab K = Tab("ccc", "rr","mmm");
wind->newTab(E);
Tab L = Tab("ooo", "yyy","ww");
wind->closeTab();
wind->newTab(K);
wind->getActiveTab();
Tab M = Tab("f", "vv","ss");
wind->print();
Tab V = Tab("ll", "m","iii");
wind->closeTab();
wind->print();
Tab G = Tab("eee", "pp","rrr");
wind->closeTab();
wind->isEmpty();
Tab J = Tab("aaa", "fff","mm");
wind->newTab(G);
Tab X = Tab("vv", "nn","m");
wind->isEmpty();
wind->print();
Tab U = Tab("ww", "iii","gg");
wind->newTab(J);
wind->getActiveTab();
Tab D = Tab("hh", "j","gg");
wind->newTab(D);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->newTab(L);
wind->print();
wind->moveActiveTabTo(0);
Tab B = Tab("ggg", "sss","xxx");
wind->newTab(B);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(M);
wind->newTab(P);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(2);
wind->newTab(Q);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->newTab(S);
wind->newTab(T);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(1);
wind->closeTab();
wind->newTab(U);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(3);
Tab R = Tab("lll", "xx","j");
wind->print();
wind->getActiveTab();
wind->newTab(R);
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(1);
wind->newTab(V);
wind->print();
wind->isEmpty();
wind->newTab(W);
wind->newTab(X);
wind->newTab(Y);
wind->closeTab();
wind->print();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(0);
delete wind;
}
	return 0;
};