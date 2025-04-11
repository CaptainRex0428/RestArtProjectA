include "Directory.lua"

workspace "RestArtProjectA"
	architecture "x64"
	startproject "Project01"
	configurations
	{
		"Debug",
		"Release",
        "Dist"
	}

    filter "system:windows"
    buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus", "/utf-8" }

group "Project"
	include "Project01/Project01.lua"