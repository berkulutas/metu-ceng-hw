#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(3);
Tab G = Tab("bb", "rr","bbb");
wind->newTab(G);
Tab K = Tab("nnn", "bbb","uu");
wind->newTab(K);
Tab O = Tab("b", "u","sss");
wind->moveActiveTabTo(4);
Tab C = Tab("s", "sss","oo");
wind->newTab(C);
Tab N = Tab("ss", "jj","aa");
wind->moveActiveTabTo(4);
wind->newTab(N);
wind->print();
Tab D = Tab("ll", "zz","qqq");
wind->closeTab();
Tab U = Tab("ww", "yy","zz");
wind->closeTab();
Tab H = Tab("iii", "bb","z");
wind->print();
wind->getActiveTab();
Tab P = Tab("uuu", "r","c");
wind->changeActiveTabTo(3);
wind->print();
Tab B = Tab("w", "zzz","mm");
wind->newTab(B);
wind->changeActiveTabTo(2);
Tab Z = Tab("c", "w","eee");
wind->print();
wind->changeActiveTabTo(0);
wind->isEmpty();
Tab Y = Tab("mmm", "ooo","ppp");
wind->closeTab();
wind->print();
Tab F = Tab("jjj", "tt","oo");
wind->print();
wind->closeTab();
Tab L = Tab("ss", "ll","jjj");
wind->changeActiveTabTo(2);
Tab M = Tab("p", "bb","a");
wind->newTab(D);
wind->newTab(F);
wind->isEmpty();
Tab V = Tab("d", "aaa","n");
wind->closeTab();
wind->print();
Tab T = Tab("ff", "aaa","bb");
wind->moveActiveTabTo(0);
Tab J = Tab("zzz", "lll","lll");
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(4);
Tab S = Tab("zzz", "mmm","yyy");
wind->changeActiveTabTo(2);
wind->newTab(H);
wind->print();
wind->print();
wind->closeTab();
wind->print();
wind->getActiveTab();
Tab E = Tab("vvv", "w","cc");
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(3);
Tab I = Tab("uuu", "yy","uuu");
wind->print();
wind->getActiveTab();
wind->newTab(E);
wind->closeTab();
Tab W = Tab("mmm", "j","uuu");
wind->newTab(I);
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->isEmpty();
Tab R = Tab("aa", "vvv","vvv");
wind->print();
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(5);
Tab Q = Tab("g", "x","i");
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(4);
Tab X = Tab("ii", "aaa","tt");
wind->closeTab();
wind->newTab(J);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->print();
wind->getActiveTab();
wind->newTab(L);
wind->newTab(M);
wind->changeActiveTabTo(1);
wind->newTab(O);
wind->closeTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->isEmpty();
wind->newTab(P);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->print();
wind->changeActiveTabTo(3);
wind->print();
wind->moveActiveTabTo(1);
wind->newTab(Q);
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(0);
wind->print();
delete wind;
}
	return 0;
};