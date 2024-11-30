#include <stdio.h>

int main() {
    double land = 80;  
    double segment = land / 5;
    
    // Tomato calculations
    double tomato_land = segment;
    double tomato_yield_30 = tomato_land * 0.30 * 10;
    double tomato_yield_70 = tomato_land * 0.70 * 12;
    double tomato_price_per_kg = 7;
    double tomato_kg = (tomato_yield_30 + tomato_yield_70) * 1000;
    double tomato_sales = tomato_kg * tomato_price_per_kg;

    // Potato calculations
    double potato_yield = segment * 10;
    double potato_price_per_kg = 20;
    double potato_kg = potato_yield * 1000;
    double potato_sales = potato_kg * potato_price_per_kg;

    // Cabbage calculations
    double cabbage_yield = segment * 14;
    double cabbage_price_per_kg = 24;
    double cabbage_kg = cabbage_yield * 1000;
    double cabbage_sales = cabbage_kg * cabbage_price_per_kg;

    // Sunflower calculations
    double sunflower_yield = segment * 0.7;  // Yield of 0.7 tonnes per acre
    double sunflower_price_per_kg = 200;
    double sunflower_kg = sunflower_yield * 1000;
    double sunflower_sales = sunflower_kg * sunflower_price_per_kg;

    // Sugarcane calculations
    double sugarcane_yield = segment * 45;  // Yield of 45 tonnes per acre
    double sugarcane_price_per_tonne = 4000;
    double sugarcane_sales = sugarcane_yield * sugarcane_price_per_tonne;

    // Total sales after the entire crop cycle
    double total_sales = tomato_sales + potato_sales + cabbage_sales + sunflower_sales + sugarcane_sales;

    // Chemical-free farming sales realization after 11 months
    // 6 months for vegetables (tomato, potato, cabbage) and 4 months for sunflower, 4 months for sugarcane
    double chemical_free_sales = (tomato_sales + potato_sales + cabbage_sales) * (6.0 / 12.0);  // 6 months of vegetable yield
    chemical_free_sales += sunflower_sales * (4.0 / 12.0);  // 4 months of sunflower yield
    chemical_free_sales += sugarcane_sales * (4.0 / 12.0);  // 4 months of sugarcane yield

    // Output
    printf("a. Total overall sales achieved by Mahesh from the 80 acres of land: Rs. %.2f\n", total_sales);
    printf("b. Sales realization from chemical-free farming at the end of 11 months: Rs. %.2f\n", chemical_free_sales);
}