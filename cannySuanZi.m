function [ output_args ] = Untitled4( input_args )
%UNTITLED4 �˴���ʾ�йش˺�����ժҪ
%   �˴���ʾ��ϸ˵��
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

