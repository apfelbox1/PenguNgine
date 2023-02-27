-- premake5.lua
workspace "PenguNgine"
	architecture "x64"

	configurations { "Debug", "Release", "Dist" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "PenguNgine"
	location "PenguNgine"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"%{prj.name}/vendor/spdlog/include"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines {
			"PENGU_PLATFORM_WINDOWS", "PENGU_BUILD_DLL"
		}

		postbuildcommands {
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "PENGU_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "PENGU_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "PENGU_DIST"
		optimize "On"


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"PenguNgine/vendor/spdlog/include",
		"PenguNgine/src"
	}

	links { "PenguNgine" }

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines { "PENGU_PLATFORM_WINDOWS" }

	filter "configurations:Debug"
		defines "PENGU_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "PENGU_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "PENGU_DIST"
		optimize "On"
