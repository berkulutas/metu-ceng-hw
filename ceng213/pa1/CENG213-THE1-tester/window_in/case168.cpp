#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(3);
Tab Y = Tab("ff", "i","f");
wind->changeActiveTabTo(0);
Tab I = Tab("e", "pp","ddd");
wind->changeActiveTabTo(2);
Tab O = Tab("jjj", "l","ppp");
wind->moveActiveTabTo(1);
Tab Q = Tab("aaa", "bb","mm");
wind->newTab(I);
Tab R = Tab("d", "kkk","ggg");
wind->closeTab();
Tab J = Tab("ddd", "www","dd");
wind->newTab(J);
Tab D = Tab("x", "yy","ddd");
wind->moveActiveTabTo(2);
Tab A = Tab("aa", "mm","zz");
wind->isEmpty();
Tab C = Tab("b", "pp","hh");
wind->moveActiveTabTo(1);
Tab G = Tab("g", "mm","ooo");
wind->isEmpty();
Tab K = Tab("dd", "zzz","xx");
wind->newTab(A);
Tab U = Tab("iii", "www","z");
wind->isEmpty();
wind->print();
Tab P = Tab("d", "iii","rrr");
wind->print();
wind->print();
Tab W = Tab("fff", "kkk","jj");
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
Tab N = Tab("zzz", "lll","xxx");
wind->getActiveTab();
wind->newTab(C);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(4);
wind->newTab(D);
Tab V = Tab("kk", "ll","ccc");
wind->getActiveTab();
wind->print();
Tab T = Tab("w", "ttt","e");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->print();
Tab X = Tab("u", "bb","bbb");
wind->changeActiveTabTo(4);
wind->isEmpty();
Tab M = Tab("hh", "y","mm");
wind->newTab(G);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(4);
Tab F = Tab("fff", "qqq","qq");
wind->getActiveTab();
wind->isEmpty();
wind->newTab(F);
Tab E = Tab("pp", "vvv","mm");
wind->changeActiveTabTo(5);
wind->newTab(E);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->closeTab();
Tab B = Tab("lll", "vv","p");
wind->getActiveTab();
wind->closeTab();
wind->newTab(B);
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->newTab(K);
Tab S = Tab("www", "sss","ss");
wind->changeActiveTabTo(3);
wind->closeTab();
Tab Z = Tab("kk", "l","iii");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(2);
wind->print();
wind->print();
wind->newTab(M);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->print();
wind->closeTab();
wind->closeTab();
wind->newTab(N);
wind->newTab(O);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->print();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
Tab H = Tab("oo", "h","mmm");
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->newTab(H);
wind->getActiveTab();
wind->closeTab();
delete wind;
}
	return 0;
};