clc
close all
clear all
A = imread('bird.jpg');
subplot(1,2,1);
imshow(A);
title('Color image');
B=rgb2gray(A);
figure
subplot(1,2,2);
imshow(B);
title('GrayScale image');
