#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab T = Tab("t", "yyy","yyy");
wind->closeTab();
Tab X = Tab("jjj", "mmm","zz");
wind->changeActiveTabTo(2);
Tab L = Tab("g", "n","ff");
wind->moveActiveTabTo(4);
Tab M = Tab("bbb", "h","nn");
wind->closeTab();
Tab E = Tab("lll", "xx","cc");
wind->newTab(E);
Tab B = Tab("kkk", "ggg","vv");
wind->print();
Tab Z = Tab("sss", "e","t");
wind->getActiveTab();
Tab S = Tab("jj", "v","bb");
wind->changeActiveTabTo(4);
Tab W = Tab("i", "y","kkk");
wind->print();
Tab N = Tab("x", "hh","x");
wind->newTab(B);
Tab G = Tab("p", "hhh","ss");
wind->newTab(G);
Tab F = Tab("f", "i","sss");
wind->newTab(F);
Tab O = Tab("p", "f","iii");
wind->getActiveTab();
wind->newTab(L);
Tab H = Tab("uu", "n","rr");
wind->print();
Tab K = Tab("c", "xxx","jjj");
wind->changeActiveTabTo(2);
Tab D = Tab("cc", "jjj","yyy");
wind->isEmpty();
Tab P = Tab("x", "ooo","fff");
wind->isEmpty();
wind->closeTab();
Tab A = Tab("kk", "q","hh");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(A);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->newTab(D);
wind->closeTab();
Tab U = Tab("y", "ww","f");
wind->newTab(H);
wind->closeTab();
Tab Q = Tab("iii", "ee","jjj");
wind->isEmpty();
wind->closeTab();
Tab Y = Tab("zz", "aaa","u");
wind->print();
wind->isEmpty();
Tab J = Tab("yyy", "ll","r");
wind->isEmpty();
wind->newTab(J);
wind->getActiveTab();
wind->closeTab();
Tab R = Tab("c", "nnn","n");
wind->closeTab();
Tab V = Tab("jj", "jjj","ccc");
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(2);
wind->newTab(K);
wind->newTab(M);
wind->closeTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(0);
wind->newTab(N);
wind->closeTab();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->closeTab();
wind->newTab(O);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(0);
wind->newTab(P);
wind->isEmpty();
wind->changeActiveTabTo(2);
Tab C = Tab("vvv", "sss","ii");
wind->closeTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->moveActiveTabTo(3);
Tab I = Tab("gg", "vv","j");
wind->closeTab();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(C);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(2);
wind->print();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->newTab(I);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(5);
delete wind;
}
	return 0;
};