add_subdirectory(upwindRiemann)
add_subdirectory(laxFriedrichsRiemann)
add_library(Riemann INTERFACE) 
target_link_libraries(Riemann INTERFACE UpwindRiemann LaxFriedrichsRiemann) 