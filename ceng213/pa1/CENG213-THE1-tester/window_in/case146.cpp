#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->print();
Tab O = Tab("uu", "ff","ooo");
wind->isEmpty();
Tab K = Tab("aaa", "ggg","z");
wind->print();
Tab X = Tab("n", "sss","ccc");
wind->print();
Tab L = Tab("oo", "f","ff");
wind->moveActiveTabTo(1);
Tab V = Tab("vv", "q","w");
wind->moveActiveTabTo(5);
Tab A = Tab("gg", "r","ooo");
wind->newTab(A);
wind->print();
wind->closeTab();
Tab Q = Tab("iii", "s","yy");
wind->newTab(K);
Tab F = Tab("vv", "bb","ii");
wind->getActiveTab();
wind->closeTab();
wind->newTab(F);
Tab S = Tab("jj", "e","w");
wind->getActiveTab();
Tab W = Tab("kk", "ooo","rr");
wind->closeTab();
wind->moveActiveTabTo(4);
wind->print();
Tab J = Tab("qq", "vvv","i");
wind->getActiveTab();
Tab Z = Tab("pp", "ccc","fff");
wind->moveActiveTabTo(4);
Tab U = Tab("aaa", "h","l");
wind->isEmpty();
Tab C = Tab("yy", "nnn","fff");
wind->print();
wind->moveActiveTabTo(2);
Tab B = Tab("ww", "w","mmm");
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
wind->print();
Tab P = Tab("w", "uuu","x");
wind->newTab(B);
Tab M = Tab("aa", "e","a");
wind->newTab(C);
wind->changeActiveTabTo(2);
Tab D = Tab("qq", "ee","jj");
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->print();
Tab R = Tab("zzz", "kk","oo");
wind->isEmpty();
Tab H = Tab("k", "ff","bbb");
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->newTab(D);
Tab G = Tab("uuu", "zzz","f");
wind->getActiveTab();
Tab N = Tab("vv", "hh","rr");
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->print();
Tab I = Tab("lll", "x","jj");
wind->newTab(G);
wind->newTab(H);
wind->newTab(I);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->closeTab();
wind->newTab(J);
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->newTab(L);
wind->print();
wind->newTab(M);
wind->newTab(N);
wind->newTab(O);
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(5);
wind->newTab(P);
wind->getActiveTab();
Tab Y = Tab("zz", "ff","dd");
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
Tab T = Tab("z", "ff","kk");
wind->newTab(Q);
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(R);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->isEmpty();
wind->newTab(S);
wind->print();
wind->moveActiveTabTo(0);
Tab E = Tab("pp", "ttt","s");
wind->changeActiveTabTo(4);
wind->print();
wind->newTab(E);
wind->print();
wind->isEmpty();
wind->newTab(T);
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
delete wind;
}
	return 0;
};