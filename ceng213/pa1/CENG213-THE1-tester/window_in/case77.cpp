#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab Z = Tab("v", "vvv","n");
wind->isEmpty();
Tab K = Tab("w", "z","e");
wind->print();
Tab F = Tab("g", "zz","ppp");
wind->closeTab();
Tab O = Tab("hhh", "yyy","qq");
wind->print();
Tab C = Tab("tt", "ttt","zzz");
wind->newTab(C);
Tab H = Tab("k", "t","e");
wind->changeActiveTabTo(4);
Tab G = Tab("uuu", "pp","qq");
wind->getActiveTab();
Tab L = Tab("y", "zz","w");
wind->isEmpty();
Tab T = Tab("eee", "bb","iii");
wind->isEmpty();
Tab N = Tab("m", "xxx","xx");
wind->closeTab();
Tab M = Tab("ppp", "tt","cc");
wind->isEmpty();
wind->closeTab();
Tab A = Tab("kkk", "ee","m");
wind->print();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(3);
Tab J = Tab("qq", "f","k");
wind->print();
Tab E = Tab("sss", "m","www");
wind->closeTab();
Tab S = Tab("zzz", "pp","qqq");
wind->changeActiveTabTo(1);
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(2);
Tab Q = Tab("vv", "zz","zz");
wind->isEmpty();
Tab W = Tab("ttt", "qqq","bbb");
wind->closeTab();
wind->print();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->newTab(A);
Tab B = Tab("jj", "b","aa");
wind->isEmpty();
Tab V = Tab("ppp", "nn","jj");
wind->changeActiveTabTo(3);
Tab I = Tab("jjj", "www","ss");
wind->changeActiveTabTo(1);
Tab D = Tab("bbb", "aa","h");
wind->moveActiveTabTo(5);
Tab R = Tab("d", "i","cc");
wind->print();
Tab Y = Tab("l", "m","iii");
wind->moveActiveTabTo(2);
wind->closeTab();
wind->closeTab();
wind->newTab(B);
wind->changeActiveTabTo(4);
wind->print();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
Tab X = Tab("k", "ooo","r");
wind->moveActiveTabTo(5);
Tab U = Tab("fff", "iii","i");
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(5);
wind->print();
wind->closeTab();
wind->closeTab();
wind->newTab(D);
wind->closeTab();
Tab P = Tab("ee", "lll","oo");
wind->newTab(E);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(4);
wind->newTab(F);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(G);
wind->isEmpty();
wind->newTab(H);
wind->closeTab();
wind->newTab(I);
wind->newTab(J);
wind->newTab(K);
wind->print();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(5);
wind->newTab(L);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->closeTab();
wind->newTab(M);
wind->closeTab();
wind->newTab(N);
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
delete wind;
}
	return 0;
};