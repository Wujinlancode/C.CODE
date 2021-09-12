function [ output_args ] = Untitled4( input_args )
%UNTITLED4 此处显示有关此函数的摘要
%   此处显示详细说明
clear all;close all;
I=imread('WIN_20200319_14_06_58_Pro.jpg');
I=rgb2gray(I); 
I=im2double(I);
J=imnoise(I,'gaussian',0,0.01);
[K,thresh]=edge(J,'canny');
figure;
subplot(121);
imshow(J);
subplot(122);
imshow(K);

end

