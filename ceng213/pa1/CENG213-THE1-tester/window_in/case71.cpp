#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(5);
Tab L = Tab("lll", "b","jj");
wind->moveActiveTabTo(1);
Tab H = Tab("z", "gg","b");
wind->getActiveTab();
Tab R = Tab("e", "x","uuu");
wind->print();
wind->newTab(H);
Tab P = Tab("yy", "qqq","zz");
wind->closeTab();
wind->print();
Tab F = Tab("p", "kk","cc");
wind->moveActiveTabTo(3);
Tab T = Tab("yyy", "eee","kkk");
wind->closeTab();
wind->changeActiveTabTo(5);
Tab Q = Tab("eee", "tt","j");
wind->newTab(F);
Tab A = Tab("nn", "www","l");
wind->changeActiveTabTo(3);
Tab B = Tab("uu", "b","i");
wind->getActiveTab();
Tab M = Tab("nnn", "oo","xxx");
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
Tab C = Tab("rr", "g","dd");
wind->moveActiveTabTo(3);
wind->print();
wind->newTab(A);
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->newTab(B);
Tab X = Tab("a", "ggg","tt");
wind->getActiveTab();
wind->isEmpty();
wind->print();
Tab E = Tab("xxx", "aa","q");
wind->newTab(C);
Tab O = Tab("hh", "aaa","o");
wind->moveActiveTabTo(2);
Tab S = Tab("nn", "h","ss");
wind->isEmpty();
Tab W = Tab("vv", "ll","u");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->print();
Tab Z = Tab("yyy", "yy","kk");
wind->newTab(E);
Tab K = Tab("r", "s","xxx");
wind->closeTab();
wind->getActiveTab();
Tab I = Tab("h", "ee","mmm");
wind->newTab(I);
wind->newTab(K);
wind->newTab(L);
wind->moveActiveTabTo(0);
wind->closeTab();
Tab D = Tab("yyy", "xx","n");
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(3);
Tab J = Tab("jjj", "hhh","x");
wind->newTab(D);
wind->print();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
Tab Y = Tab("e", "ll","mm");
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->newTab(J);
wind->closeTab();
Tab G = Tab("iii", "fff","w");
wind->newTab(G);
wind->print();
wind->isEmpty();
Tab U = Tab("d", "t","nnn");
wind->closeTab();
wind->changeActiveTabTo(0);
Tab V = Tab("eee", "dd","c");
wind->moveActiveTabTo(4);
wind->newTab(M);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(4);
wind->newTab(O);
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->newTab(P);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->newTab(Q);
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(0);
Tab N = Tab("ss", "sss","hh");
wind->newTab(N);
wind->print();
wind->getActiveTab();
wind->newTab(R);
delete wind;
}
	return 0;
};