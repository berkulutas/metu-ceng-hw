#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("vvv", "mm","ww");
Tab B = Tab("ttt", "l","v");
Tab C = Tab("mmm", "yy","xx");
Tab D = Tab("oo", "m","v");
Tab E = Tab("e", "zz","aa");
Tab F = Tab("zz", "bb","jjj");
Tab G = Tab("ww", "q","ddd");
Tab H = Tab("n", "eee","bbb");
Tab I = Tab("www", "aaa","a");
Tab J = Tab("h", "ttt","w");
Tab K = Tab("oo", "hhh","x");
Tab L = Tab("mmm", "qq","tt");
Tab M = Tab("qq", "j","ii");
Tab N = Tab("rr", "iii","y");
Tab O = Tab("x", "xx","z");
Tab P = Tab("iii", "bbb","ooo");
Tab Q = Tab("d", "p","ii");
Tab R = Tab("k", "s","x");
Tab S = Tab("t", "n","ll");
Tab T = Tab("kkk", "bb","cc");
Tab U = Tab("q", "v","kk");
Tab V = Tab("c", "tt","sss");
Tab W = Tab("v", "g","ggg");
Tab X = Tab("ii", "oo","kkk");
Tab Y = Tab("tt", "oo","zz");
Tab Z = Tab("b", "g","yy");
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(A);
b.moveActiveTabTo(0);
c.newTab(B);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(C);
a.newTab(D);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(0);
b.newTab(G);
c.newTab(H);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.newTab(I);
c.changeActiveTabTo(3);
d.newTab(J);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(K);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.newTab(L);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(M);
a.newTab(N);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(O);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(P);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(Q);
b.newTab(R);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(S);
b.newTab(T);
c.newTab(U);
d.moveActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(V);
d.newTab(W);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(X);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(Y);
d.newTab(Z);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
c.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(8);
brows->getWindow(8);
brows->getWindow(6);
brows->closeWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->getWindow(1);
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(4);
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->print();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->getWindow(4);
brows->switchToWindow(5);
brows->print();
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->mergeAllWindows();
delete brows;
}
	return 0;
};