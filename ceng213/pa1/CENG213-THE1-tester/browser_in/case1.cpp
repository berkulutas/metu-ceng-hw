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
Tab A = Tab("ttt", "uuu","vvv");
Tab B = Tab("bb", "vv","tt");
Tab C = Tab("pp", "m","h");
Tab D = Tab("nnn", "qq","y");
Tab E = Tab("p", "p","vvv");
Tab F = Tab("kk", "rrr","ee");
Tab G = Tab("n", "ll","l");
Tab H = Tab("lll", "j","r");
Tab I = Tab("ccc", "ddd","k");
Tab J = Tab("ss", "ooo","ccc");
Tab K = Tab("zzz", "gg","hhh");
Tab L = Tab("ll", "ll","nn");
Tab M = Tab("zz", "iii","p");
Tab N = Tab("kkk", "bb","b");
Tab O = Tab("aa", "jj","v");
Tab P = Tab("w", "yy","kkk");
Tab Q = Tab("b", "vvv","o");
Tab R = Tab("c", "k","q");
Tab S = Tab("jj", "zzz","nn");
Tab T = Tab("sss", "aaa","jj");
Tab U = Tab("w", "oo","aaa");
Tab V = Tab("kkk", "xx","f");
Tab W = Tab("yy", "ww","ddd");
Tab X = Tab("pp", "ooo","rrr");
Tab Y = Tab("n", "h","nn");
Tab Z = Tab("jj", "u","ww");
a.newTab(A);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(B);
b.newTab(C);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(D);
d.newTab(E);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(F);
d.moveActiveTabTo(1);
a.newTab(G);
b.newTab(H);
c.newTab(I);
d.newTab(J);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(K);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(L);
a.newTab(M);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(N);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(O);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.newTab(P);
c.changeActiveTabTo(0);
d.newTab(Q);
a.changeActiveTabTo(5);
b.newTab(R);
c.changeActiveTabTo(5);
d.newTab(S);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(T);
c.changeActiveTabTo(5);
d.newTab(U);
a.newTab(V);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(W);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.newTab(X);
d.moveActiveTabTo(5);
a.newTab(Y);
b.newTab(Z);
c.changeActiveTabTo(0);
d.newTab(Z);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
c.moveActiveTabTo(5);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
a.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(2);
brows->getWindow(5);
brows->newWindow();
brows->getWindow(6);
brows->getWindow(9);
brows->mergeAllWindows();
brows->getWindow(8);
brows->switchToWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(4);
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->getWindow(3);
brows->mergeAllWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->getWindow(2);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(9);
brows->getWindow(6);
brows->switchToWindow(4);
brows->newWindow();
brows->switchToWindow(6);
brows->getWindow(8);
brows->print();
brows->print();
brows->switchToWindow(9);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->switchToWindow(1);
brows->switchToWindow(2);
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->getWindow(4);
brows->getWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->getWindow(7);
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(9);
delete brows;
}
	return 0;
};