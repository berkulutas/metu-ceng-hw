#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(2);
Tab G = Tab("vvv", "j","ttt");
wind->newTab(G);
Tab H = Tab("m", "www","l");
wind->closeTab();
Tab I = Tab("w", "x","ss");
wind->newTab(H);
Tab D = Tab("rr", "mm","i");
wind->moveActiveTabTo(4);
Tab T = Tab("ww", "dd","e");
wind->moveActiveTabTo(3);
Tab O = Tab("ee", "dd","ss");
wind->newTab(D);
Tab K = Tab("s", "rr","qqq");
wind->isEmpty();
Tab V = Tab("ddd", "mm","uuu");
wind->newTab(I);
Tab J = Tab("z", "kkk","n");
wind->getActiveTab();
wind->print();
Tab X = Tab("qqq", "yy","s");
wind->isEmpty();
Tab W = Tab("sss", "cc","t");
wind->isEmpty();
wind->newTab(J);
wind->isEmpty();
wind->changeActiveTabTo(1);
Tab Q = Tab("mm", "sss","y");
wind->closeTab();
wind->moveActiveTabTo(4);
wind->closeTab();
wind->closeTab();
Tab C = Tab("nnn", "yy","e");
wind->moveActiveTabTo(5);
Tab A = Tab("cc", "h","h");
wind->newTab(A);
wind->changeActiveTabTo(1);
Tab U = Tab("yy", "mmm","t");
wind->print();
Tab Z = Tab("d", "xxx","uu");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(4);
Tab E = Tab("oo", "ttt","z");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->newTab(C);
Tab F = Tab("xxx", "dd","p");
wind->closeTab();
Tab B = Tab("d", "q","j");
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(4);
Tab P = Tab("eee", "vv","rrr");
wind->moveActiveTabTo(3);
Tab L = Tab("rr", "cc","ee");
wind->getActiveTab();
wind->newTab(B);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->newTab(E);
Tab S = Tab("kk", "ff","nn");
wind->print();
wind->moveActiveTabTo(0);
wind->print();
wind->newTab(F);
Tab N = Tab("fff", "pp","w");
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(4);
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
Tab R = Tab("m", "n","kk");
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(K);
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(1);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(4);
wind->closeTab();
wind->print();
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(2);
wind->closeTab();
wind->newTab(L);
wind->changeActiveTabTo(0);
wind->newTab(N);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->print();
wind->changeActiveTabTo(0);
wind->closeTab();
wind->print();
Tab M = Tab("c", "ll","uuu");
wind->isEmpty();
wind->newTab(M);
wind->isEmpty();
wind->newTab(O);
wind->closeTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->newTab(P);
delete wind;
}
	return 0;
};