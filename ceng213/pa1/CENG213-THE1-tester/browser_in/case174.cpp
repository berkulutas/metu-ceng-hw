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
Tab A = Tab("f", "yy","w");
Tab B = Tab("mm", "mm","u");
Tab C = Tab("mm", "ooo","f");
Tab D = Tab("xx", "p","eee");
Tab E = Tab("vv", "ww","p");
Tab F = Tab("bb", "uu","r");
Tab G = Tab("uu", "l","kkk");
Tab H = Tab("k", "d","ppp");
Tab I = Tab("ooo", "uuu","iii");
Tab J = Tab("mm", "www","d");
Tab K = Tab("jj", "j","vvv");
Tab L = Tab("ggg", "mmm","aa");
Tab M = Tab("aaa", "hhh","u");
Tab N = Tab("aa", "www","bb");
Tab O = Tab("iii", "u","ccc");
Tab P = Tab("j", "t","xx");
Tab Q = Tab("m", "mm","n");
Tab R = Tab("u", "ttt","lll");
Tab S = Tab("ll", "ww","jj");
Tab T = Tab("mmm", "ttt","ii");
Tab U = Tab("h", "nn","i");
Tab V = Tab("ii", "rrr","l");
Tab W = Tab("zz", "uu","nnn");
Tab X = Tab("f", "cc","ttt");
Tab Y = Tab("ddd", "r","z");
Tab Z = Tab("hhh", "ss","hh");
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(A);
a.newTab(B);
b.moveActiveTabTo(1);
c.newTab(C);
d.newTab(D);
a.newTab(E);
b.moveActiveTabTo(3);
c.newTab(F);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(G);
d.newTab(H);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(0);
b.newTab(I);
c.moveActiveTabTo(0);
d.newTab(J);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(K);
b.newTab(L);
c.moveActiveTabTo(4);
d.newTab(M);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(N);
d.newTab(O);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(P);
a.changeActiveTabTo(4);
b.newTab(Q);
c.moveActiveTabTo(4);
d.newTab(R);
a.newTab(S);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(T);
b.moveActiveTabTo(2);
c.newTab(U);
d.changeActiveTabTo(2);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(V);
a.newTab(W);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.newTab(X);
a.newTab(Y);
b.newTab(Z);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(0);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->getWindow(4);
brows->switchToWindow(3);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeWindow();
brows->getWindow(6);
brows->switchToWindow(4);
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(5);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(4);
brows->switchToWindow(5);
brows->print();
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->switchToWindow(8);
brows->closeWindow();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->getWindow(4);
brows->print();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(6);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(9);
brows->print();
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(1);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(2);
brows->print();
brows->print();
brows->closeWindow();
delete brows;
}
	return 0;
};