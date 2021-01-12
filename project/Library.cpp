#include "Library.h"
#include <iostream>
#include <string>

Library::Library(const AVLTree& other) : all_songs(other){}

Library::~Library() {}

User& Library::get_user() 
{
	return curr_user;
}
Playlist& Library::get_playlist() 
{
	return curr_playlist;
}
AVLTree& Library::get_songs()
{
	return all_songs;
}



void Library::add_user(const User& other)
{
	curr_user = other;
}
void Library::add_playlist(const Playlist& other)
{
	curr_playlist = other;
}

void Library::add_song(const Song& other)
{
	all_songs.insert(other);
}

