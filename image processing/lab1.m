clear all
close all
clc
pkg load image
img = imread('bird.jpg')
figure
imshow(img)
grayscaleimg=rgb2gray(img);
figure
imshow(grayscaleimg)
title('grayscaleimg')
