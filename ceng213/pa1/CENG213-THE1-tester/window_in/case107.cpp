#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
Tab K = Tab("kkk", "ddd","c");
wind->newTab(K);
Tab E = Tab("t", "www","t");
wind->changeActiveTabTo(5);
Tab O = Tab("qq", "vvv","uuu");
wind->moveActiveTabTo(3);
Tab X = Tab("bb", "i","z");
wind->moveActiveTabTo(3);
Tab L = Tab("o", "e","pp");
wind->newTab(E);
Tab T = Tab("z", "ff","ggg");
wind->moveActiveTabTo(2);
Tab R = Tab("yyy", "kkk","d");
wind->print();
Tab V = Tab("rrr", "eee","hh");
wind->newTab(L);
Tab B = Tab("ss", "kk","gg");
wind->print();
wind->moveActiveTabTo(4);
wind->newTab(B);
Tab U = Tab("iii", "pp","d");
wind->newTab(O);
wind->getActiveTab();
Tab J = Tab("dd", "ppp","vvv");
wind->print();
Tab C = Tab("l", "ttt","s");
wind->newTab(C);
Tab G = Tab("ww", "uu","ff");
wind->isEmpty();
Tab N = Tab("g", "dd","h");
wind->getActiveTab();
Tab P = Tab("gg", "bbb","mm");
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->print();
Tab W = Tab("ss", "www","ww");
wind->print();
Tab F = Tab("tt", "y","x");
wind->isEmpty();
Tab S = Tab("pp", "ggg","ii");
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(0);
Tab A = Tab("bbb", "zzz","cc");
wind->closeTab();
wind->newTab(A);
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
Tab I = Tab("ff", "yy","a");
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(3);
wind->newTab(F);
wind->print();
wind->getActiveTab();
wind->print();
wind->print();
Tab Q = Tab("dd", "ee","tt");
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
Tab D = Tab("s", "mmm","e");
wind->newTab(D);
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->print();
Tab M = Tab("qq", "ll","ss");
wind->moveActiveTabTo(2);
Tab Z = Tab("pp", "sss","kkk");
wind->closeTab();
wind->newTab(G);
wind->isEmpty();
wind->newTab(I);
wind->changeActiveTabTo(0);
Tab Y = Tab("l", "u","hh");
wind->newTab(J);
wind->print();
Tab H = Tab("ee", "v","l");
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->newTab(H);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->newTab(M);
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(4);
wind->newTab(N);
wind->newTab(P);
wind->changeActiveTabTo(2);
wind->newTab(Q);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->newTab(R);
wind->print();
wind->print();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->print();
wind->newTab(S);
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->newTab(T);
delete wind;
}
	return 0;
};