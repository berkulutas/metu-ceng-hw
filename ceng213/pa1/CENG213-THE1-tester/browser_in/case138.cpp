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
Tab A = Tab("o", "q","gg");
Tab B = Tab("mm", "vv","g");
Tab C = Tab("kk", "f","u");
Tab D = Tab("w", "x","bb");
Tab E = Tab("s", "y","fff");
Tab F = Tab("r", "d","t");
Tab G = Tab("yy", "v","ff");
Tab H = Tab("k", "ff","ii");
Tab I = Tab("u", "sss","z");
Tab J = Tab("d", "c","nnn");
Tab K = Tab("t", "l","g");
Tab L = Tab("vv", "v","hh");
Tab M = Tab("ttt", "yyy","p");
Tab N = Tab("rr", "q","w");
Tab O = Tab("p", "o","a");
Tab P = Tab("a", "s","s");
Tab Q = Tab("f", "q","q");
Tab R = Tab("ff", "dd","bbb");
Tab S = Tab("fff", "bb","ppp");
Tab T = Tab("ttt", "nn","xxx");
Tab U = Tab("c", "z","n");
Tab V = Tab("yyy", "pp","ll");
Tab W = Tab("yy", "lll","j");
Tab X = Tab("ww", "ooo","tt");
Tab Y = Tab("dd", "ll","fff");
Tab Z = Tab("k", "ii","jj");
a.newTab(A);
b.newTab(B);
c.newTab(C);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(D);
d.moveActiveTabTo(4);
a.newTab(E);
b.changeActiveTabTo(1);
c.newTab(F);
d.newTab(G);
a.moveActiveTabTo(0);
b.newTab(H);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(I);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(J);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(M);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(N);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(O);
a.changeActiveTabTo(0);
b.newTab(P);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(Q);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
b.newTab(R);
c.newTab(S);
d.moveActiveTabTo(4);
a.newTab(T);
b.newTab(U);
c.newTab(V);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(W);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(X);
a.newTab(Y);
b.moveActiveTabTo(4);
c.newTab(Z);
d.moveActiveTabTo(4);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
c.changeActiveTabTo(3);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
b.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
c.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
d.changeActiveTabTo(4);
c.changeActiveTabTo(1);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->newWindow();
brows->getWindow(0);
brows->switchToWindow(4);
brows->closeWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->switchToWindow(0);
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->print();
brows->getWindow(7);
brows->getWindow(9);
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(4);
brows->newWindow();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->getWindow(7);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->getWindow(7);
brows->getWindow(1);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->print();
brows->newWindow();
brows->switchToWindow(7);
brows->getWindow(1);
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(0);
brows->getWindow(1);
brows->print();
brows->getWindow(3);
brows->print();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->getWindow(6);
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->getWindow(5);
brows->newWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
};